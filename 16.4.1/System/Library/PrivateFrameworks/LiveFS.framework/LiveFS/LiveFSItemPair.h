@class NSString;

@interface LiveFSItemPair : NSObject <NSCopying>

@property (readonly) NSString *itemId;
@property (readonly) NSString *filename;

+ (id)newWithParent:(id)a0 fname:(id)a1;
+ (id)newWithParent:(id)a0 fname:(id)a1 caseSensitivity:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0 fname:(id)a1 caseSensitivity:(BOOL)a2;

@end
