@class NSString, NSMutableString;

@interface ICSStringWriter : NSObject <ICSAppendable> {
    NSMutableString *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendFormat:(id)a0;
- (id)result;
- (void)appendString:(id)a0;
- (id)initWithString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)mutableResult;

@end
