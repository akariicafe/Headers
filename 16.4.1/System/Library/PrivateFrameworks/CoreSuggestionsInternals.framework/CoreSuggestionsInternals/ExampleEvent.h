@class NSData, NSString;

@interface ExampleEvent : NSObject <BMStoreData>

@property (readonly, copy, nonatomic) NSData *foo;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithFoo:(id)a0;

@end
