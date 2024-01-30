@class NSString;

@interface MTLMessage : NSObject

@property (readonly) unsigned long long type;
@property (readonly, retain) NSString *string;

- (id)init:(unsigned long long)a0 message:(id)a1;
- (void)dealloc;

@end
