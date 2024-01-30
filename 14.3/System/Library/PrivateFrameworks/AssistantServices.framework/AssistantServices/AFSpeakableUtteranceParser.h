@class NSMutableDictionary, NSLocale;

@interface AFSpeakableUtteranceParser : NSObject {
    NSMutableDictionary *_providers;
    id _functionHandler;
    NSLocale *_locale;
}

@property (nonatomic) BOOL handleTTSCodes;
@property (nonatomic) BOOL handlesFunctions;

+ (BOOL)_shouldAutomaticallyProvideFunctions;
+ (id)parseUserGeneratedMessage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerProvider:(id)a0 forNamespace:(id)a1;
- (id)_parseStringWithFormat:(id)a0 error:(id *)a1 hadEmpties:(BOOL *)a2 containsPrivacySensitiveContents:(BOOL *)a3 externalProviders:(BOOL *)a4;
- (id)parseStringWithFormat:(id)a0 error:(id *)a1 hasExternalDomains:(BOOL *)a2;
- (id)parseStringWithFormat:(id)a0 error:(id *)a1;
- (id)parseStringWithFormat:(id)a0 includeControlCharacters:(BOOL)a1 error:(id *)a2 hadEmpties:(BOOL *)a3 containsPrivacySensitiveContents:(BOOL *)a4 externalProviders:(BOOL *)a5;
- (id)_handleOptionalAtIndex:(unsigned int)a0 withBuffer:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; })a1 totalLength:(unsigned long long)a2 consumedLength:(unsigned int *)a3 containsPrivacySensitiveContents:(BOOL *)a4 externalProviders:(BOOL *)a5;
- (id)parseStringRemovingControlCharacters:(id)a0 error:(id *)a1;
- (id)_handleProviderAtIndex:(unsigned int)a0 withBuffer:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; })a1 totalLength:(unsigned long long)a2 consumedLength:(unsigned int *)a3 containsPrivacySensitiveContents:(BOOL *)a4 hadEmpties:(BOOL *)a5 externalProviders:(BOOL *)a6;
- (id)_handleControlCodeAtIndex:(unsigned int)a0 withBuffer:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; })a1 totalLength:(unsigned long long)a2 consumedLength:(unsigned int *)a3 hadEmpties:(BOOL *)a4 containsPrivacySensitiveContents:(BOOL *)a5 externalProviders:(BOOL *)a6;
- (id)parseStringWithFormat:(id)a0 error:(id *)a1 containsPrivacySensitiveContents:(BOOL *)a2 hasExternalDomains:(BOOL *)a3;
- (id)parseStringWithFormat:(id)a0 error:(id *)a1 containsPrivacySensitiveContents:(BOOL *)a2;
- (id)parseStringRemovingControlCharacters:(id)a0 error:(id *)a1 containsPrivacySensitiveContents:(BOOL *)a2;
- (id)initWithLocale:(id)a0;

@end
