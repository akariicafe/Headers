@class NSString, NSMutableDictionary;

@interface WBSUserMediaCapturePolicyEntry : NSObject

@property (nonatomic) double permissionExpirationDate;
@property (nonatomic) double permissionGrantDate;
@property (retain, nonatomic) NSString *origin;
@property (retain, nonatomic) NSString *topLevelOrigin;
@property (retain, nonatomic) NSString *persistentSalt;
@property (nonatomic) unsigned long long permission;
@property (retain, nonatomic) NSMutableDictionary *ephemeralSalts;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isValid;
- (void)updatePermission:(unsigned long long)a0 expirationPolicy:(unsigned long long)a1;
- (id)initWithPermission:(unsigned long long)a0 expirationPolicy:(unsigned long long)a1 forOrigin:(id)a2 topLevelOrigin:(id)a3;
- (BOOL)permissionExpiresWithinOneDay;
- (BOOL)_isValidUserMediaPermission:(unsigned long long)a0;

@end
