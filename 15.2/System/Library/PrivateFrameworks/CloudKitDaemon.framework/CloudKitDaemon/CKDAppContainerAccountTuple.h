@class NSString, CKDAppContainerTuple;

@interface CKDAppContainerAccountTuple : NSObject <NSCopying>

@property (retain, nonatomic) CKDAppContainerTuple *appContainerTuple;
@property (copy, nonatomic) NSString *accountID;

- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAppContainerTuple:(id)a0 accountID:(id)a1;

@end
