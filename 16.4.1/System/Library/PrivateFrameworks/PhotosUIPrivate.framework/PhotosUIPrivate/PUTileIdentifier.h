@class NSString, NSIndexPath;

@interface PUTileIdentifier : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *tileKind;
@property (readonly, nonatomic) NSString *dataSourceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIndexPath:(id)a0 tileKind:(id)a1 dataSourceIdentifier:(id)a2;

@end
