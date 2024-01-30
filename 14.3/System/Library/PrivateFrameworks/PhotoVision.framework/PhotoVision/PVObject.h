@class NSString;

@interface PVObject : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *localIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalIdentifier:(id)a0;
- (id)description;

@end
