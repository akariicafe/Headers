@class NSString;
@protocol FCStreaming;

@interface FCTransformedStream : NSObject <FCStreaming>

@property (copy, nonatomic) id /* block */ transformBlock;
@property (retain, nonatomic) id<FCStreaming> stream;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
