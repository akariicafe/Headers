@class REScriptToken, NSString;
@protocol RETokenBuffer;

@interface REStandardizedTokenBuffer : NSObject <RETokenBuffer> {
    id<RETokenBuffer> _buffer;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) REScriptToken *currentToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
