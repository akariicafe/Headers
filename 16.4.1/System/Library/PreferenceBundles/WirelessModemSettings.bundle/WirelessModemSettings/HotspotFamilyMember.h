@class NSString;

@interface HotspotFamilyMember : NSObject

@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) int shareOption;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0 displayName:(id)a1 shareOption:(int)a2;

@end
