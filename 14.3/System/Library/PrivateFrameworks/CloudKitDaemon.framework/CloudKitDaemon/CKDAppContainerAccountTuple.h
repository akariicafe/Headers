@class NSString, CKDAppContainerTuple;

@interface CKDAppContainerAccountTuple : NSObject <NSCopying>

@property (retain, nonatomic) CKDAppContainerTuple *appContainerTuple;
@property (copy, nonatomic) NSString *accountID;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAppContainerTuple:(id)a0 accountID:(id)a1;

@end
