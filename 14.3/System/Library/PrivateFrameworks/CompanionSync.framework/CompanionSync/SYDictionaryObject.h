@class NSDictionary, NSString;

@interface SYDictionaryObject : NSObject <SYObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProperties:(id)a0;
- (void).cxx_destruct;
- (id)syncId;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
