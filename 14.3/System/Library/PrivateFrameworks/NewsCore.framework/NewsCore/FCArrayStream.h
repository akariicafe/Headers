@class NSString, NSArray;

@interface FCArrayStream : NSObject <FCStreaming> {
    NSArray *_array;
    unsigned long long _index;
}

@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
