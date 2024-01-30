@class NSString;
@protocol FSFStreamSourceProtocol;

@interface FSFCurareInteractionStream : NSObject <FSFStreamSourceProtocol>

@property (retain, nonatomic) id<FSFStreamSourceProtocol> stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getWithStreamId:(id)a0;
+ (id)eventFilterForEventTypes:(id)a0;
+ (id)getWithStreamId:(id)a0 sourceType:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithStreamId:(id)a0;
- (BOOL)insert:(id)a0 error:(id *)a1;
- (BOOL)deleteCurrentStream;
- (id)initWithStreamId:(id)a0 sourceType:(unsigned long long)a1;
- (id)retrieve:(id)a0;
- (void)retrieve:(id)a0 completionHandler:(id /* block */)a1;

@end
