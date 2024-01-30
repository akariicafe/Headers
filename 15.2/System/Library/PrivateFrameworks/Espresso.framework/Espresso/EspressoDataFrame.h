@class NSString, NSMutableDictionary, NSArray;

@interface EspressoDataFrame : NSObject

@property (retain) NSMutableDictionary *inputAttachments;
@property (retain) NSMutableDictionary *outputAttachments;
@property (retain) NSMutableDictionary *groundTruthAttachments;
@property (retain) NSString *function_name;
@property (readonly) NSArray *inputAttachmentNames;
@property (readonly) NSArray *outputAttachmentNames;
@property (readonly) NSArray *groundTruthAttachmentNames;

- (void)loadFromDict:(id)a0 frameStorage:(id)a1;
- (id)getFunctionName;
- (id)getInputAttachment:(id)a0;
- (id)getOutputAttachment:(id)a0;
- (id)getGroundTruthAttachment:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
