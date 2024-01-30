@class NSString, NSData;

@interface PXSharedLibraryLegacyDevice : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *instructions;
@property (readonly, nonatomic) NSData *iconData;
@property (readonly, nonatomic) long long operatingSystem;
@property (readonly, nonatomic) BOOL upgradeable;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 iconData:(id)a1 operatingSystem:(long long)a2 upgradeable:(BOOL)a3;

@end
