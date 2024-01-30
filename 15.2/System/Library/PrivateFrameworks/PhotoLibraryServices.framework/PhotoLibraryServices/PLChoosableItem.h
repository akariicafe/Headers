@class NSString;

@interface PLChoosableItem : NSObject

@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;

+ (id)choosableItemsFromCloudResources:(id)a0;

- (id)initWithWidth:(long long)a0 height:(long long)a1 type:(int)a2 uniformTypeIdentifier:(id)a3;
- (BOOL)isEqualToChoosableItem:(id)a0;
- (long long)compareUsingWidth:(id)a0;
- (id)description;
- (id)initWithCloudResource:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
