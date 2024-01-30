@class NSString;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCImplicitIPCObjectDescription : NSObject <_GCIPCObjectDescription>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)materializeWithContext:(id)a0;

@end
