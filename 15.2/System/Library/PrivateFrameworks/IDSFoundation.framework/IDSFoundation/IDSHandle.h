@class IDSURI;

@interface IDSHandle : NSObject

@property (readonly, nonatomic) IDSURI *URI;
@property (readonly, nonatomic) BOOL isUserVisible;
@property (readonly, nonatomic) long long validationStatus;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToHandle:(id)a0;
- (unsigned long long)hash;
- (id)initWithURI:(id)a0 isUserVisible:(BOOL)a1 validationStatus:(long long)a2;

@end
