@class NSString, EMObjectID;

@interface EMObject : NSObject <EMObject, NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) EMObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_commonInitWithObjectID:(id)a0;
- (id)initWithObjectID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
