@class NSArray, NSData, NSLocale;

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction <NSSecureCoding> {
    NSLocale *_locale;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long PINCompletion;
@property (retain) NSArray *PINMessageIndices;
@property (retain) NSLocale *locale;
@property unsigned short resultSW;
@property (retain) NSData *resultData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
