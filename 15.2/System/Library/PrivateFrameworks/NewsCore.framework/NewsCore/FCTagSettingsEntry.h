@class NSString, NSNumber, CKRecord;

@interface FCTagSettingsEntry : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *tagID;
@property (readonly, copy, nonatomic) NSNumber *fontMultiplier;
@property (readonly, copy, nonatomic) NSNumber *fontMultiplierMacOS;
@property (readonly, copy, nonatomic) NSNumber *contentScale;
@property (readonly, copy, nonatomic) NSNumber *contentScaleMacOS;
@property (readonly, copy, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) BOOL webAccessOptIn;
@property (readonly, nonatomic) CKRecord *asCKRecord;

- (void).cxx_destruct;
- (id)initWithEntryID:(id)a0 tagID:(id)a1 fontMultiplier:(id)a2 fontMultiplierMacOS:(id)a3 contentScale:(id)a4 contentScaleMacOS:(id)a5 accessToken:(id)a6 webAccessOptIn:(BOOL)a7;

@end
