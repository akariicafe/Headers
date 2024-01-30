@class NSString, NSArray;

@interface BlastDoorSMSParserPart : NSObject {
    void /* unknown type, empty encoding */ sMSParserPart;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *textParts;
@property (nonatomic, readonly) NSArray *attachmentParts;

- (void).cxx_destruct;
- (id)init;

@end
