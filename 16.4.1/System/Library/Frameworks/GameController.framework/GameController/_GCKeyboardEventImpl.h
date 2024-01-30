@class NSString;

@interface _GCKeyboardEventImpl : NSObject <_GCKeyboardEvent>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long usagePage;
@property (nonatomic) long long usage;
@property (nonatomic) long long down;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyboardEvent:(id)a0;

@end
