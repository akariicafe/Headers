@class NSArray, NSNumber, NSDictionary;

@interface AMDFetchAppSegmentsResponse : NSObject

@property (retain) NSArray *segmentInfo;
@property (retain) NSNumber *segmentInfoType;
@property (retain) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)getMetadata;
- (id)getSegmentInfo;
- (id)getSegmentInfoType;
- (id)initWithSegmentInfo:(id)a0 ofType:(id)a1 andMetaData:(id)a2;

@end
