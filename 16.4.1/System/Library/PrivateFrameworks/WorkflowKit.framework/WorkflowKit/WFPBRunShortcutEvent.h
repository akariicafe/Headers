@class NSString;

@interface WFPBRunShortcutEvent : PBCodable <NSCopying> {
    struct { unsigned char actionCount : 1; unsigned char numberOfDialogsPresented : 1; unsigned char completed : 1; unsigned char didPresentShareSheet : 1; unsigned char didRunRemotely : 1; unsigned char isFromAutomationSuggestion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasRunSource;
@property (retain, nonatomic) NSString *runSource;
@property (readonly, nonatomic) BOOL hasAutomationType;
@property (retain, nonatomic) NSString *automationType;
@property (nonatomic) BOOL hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL hasDidRunRemotely;
@property (nonatomic) BOOL didRunRemotely;
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (retain, nonatomic) NSString *shortcutSource;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (nonatomic) BOOL hasNumberOfDialogsPresented;
@property (nonatomic) unsigned int numberOfDialogsPresented;
@property (nonatomic) BOOL hasDidPresentShareSheet;
@property (nonatomic) BOOL didPresentShareSheet;
@property (nonatomic) BOOL hasIsFromAutomationSuggestion;
@property (nonatomic) BOOL isFromAutomationSuggestion;
@property (readonly, nonatomic) BOOL hasAutomationSuggestionsTrialIdentifier;
@property (retain, nonatomic) NSString *automationSuggestionsTrialIdentifier;
@property (readonly, nonatomic) BOOL hasScriptingRunBundleIdentifier;
@property (retain, nonatomic) NSString *scriptingRunBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
