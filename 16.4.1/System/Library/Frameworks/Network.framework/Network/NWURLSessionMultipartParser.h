@class NSString, NSMutableDictionary, NWURLSessionMultipartBoundaryRecognizer, NWURLSessionMultipartHeaderRecognizer, NSObject;
@protocol NWURLSessionResponseConsumer, OS_dispatch_data, OS_dispatch_queue;

@interface NWURLSessionMultipartParser : NSObject {
    BOOL _isFirstBoundary;
    int _parserState;
    NSString *_boundary;
    id<NWURLSessionResponseConsumer> _responseConsumer;
    NSObject<OS_dispatch_data> *_data;
    NWURLSessionMultipartBoundaryRecognizer *_boundaryRecognizer;
    NWURLSessionMultipartBoundaryRecognizer *_closeDelimiterRecognizer;
    NWURLSessionMultipartHeaderRecognizer *_headerRecognizer;
    NSMutableDictionary *_headers;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _boundaryPatternSize;
    unsigned long long _closeDelimiterPatternSize;
}

- (void).cxx_destruct;

@end
