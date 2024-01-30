@class NSString, AXSDTimeStamp;

@interface AXSDDetectionResult : NSObject {
    AXSDTimeStamp *_timestamp;
    NSString *_identifier;
    double _confidence;
}

@property (readonly) AXSDTimeStamp *timestamp;
@property (readonly) NSString *identifier;
@property (readonly) double confidence;
@property (readonly) NSString *debug;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimeStamp:(id)a0 identifier:(id)a1 confidence:(double)a2;

@end
