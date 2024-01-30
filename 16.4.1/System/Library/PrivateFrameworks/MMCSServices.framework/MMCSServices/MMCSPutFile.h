@class NSString, NSData;

@interface MMCSPutFile : MMCSSimpleFile

@property (copy) NSString *protocolVersion;
@property (copy) NSData *authRequestData;
@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ progressUpdateBlock;
@property (copy) id /* block */ registrationBlock;

- (void)setProgress:(double)a0;
- (void)dealloc;

@end
