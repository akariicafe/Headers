@class NSString;

@interface NRDiffBase : NSObject <NRDiffProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enclosedClassTypes;

@end
