@class NSString;

@interface HSCMBaseObject : NSObject <HSCMBaseObjectInterface>

@property (readonly, nonatomic) struct OpaqueCMBaseObject { } *underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statusDescription:(int)a0;

- (id)initWithBaseObject:(struct OpaqueCMBaseObject { } *)a0;
- (BOOL)setValue:(id)a0 forProperty:(struct __CFString { } *)a1 error:(id *)a2;
- (id)valueForProperty:(struct __CFString { } *)a0 error:(id *)a1;

@end
