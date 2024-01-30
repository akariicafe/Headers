@class NSString, SGPostalAddressComponents;

@interface SGPostalAddress : SGLabeledObject {
    NSString *_cachedAddress;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _cachedAddressLock;
}

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *rawAddress;
@property (readonly, nonatomic) SGPostalAddressComponents *components;

+ (BOOL)supportsSecureCoding;
+ (id)postalAddress:(id)a0 components:(id)a1 label:(id)a2 extractionInfo:(id)a3 recordId:(id)a4;
+ (id)postalAddress:(id)a0 components:(id)a1 label:(id)a2 extractionType:(unsigned long long)a3 recordId:(id)a4;
+ (id)postalAddress:(id)a0 components:(id)a1 label:(id)a2 extractionType:(unsigned long long)a3 recordId:(id)a4 origin:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToPostalAddress:(id)a0;
- (id)initWithAddress:(id)a0 components:(id)a1 label:(id)a2 extractionInfo:(id)a3 recordId:(id)a4;

@end
