@class NSString, SBDisplayPowerLogEntry, SBExternalDisplayArrangementItem;

@interface SBDisplayAssertionPreferences : NSObject <NSCopying>

@property (nonatomic) BOOL wantsControlOfDisplay;
@property (retain, nonatomic) SBExternalDisplayArrangementItem *displayArrangement;
@property (copy, nonatomic) NSString *disableSystemIdleSleepReason;
@property (copy, nonatomic) SBDisplayPowerLogEntry *powerLogEntry;
@property (nonatomic) unsigned long long cloneMirroringMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
