@class NSArray;

@interface DocumentUnderstanding.DUTopicDetectionResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ globalTopics;
    void /* unknown type, empty encoding */ personalTopics;
}

@property (nonatomic, copy) NSArray *globalTopics;
@property (nonatomic, copy) NSArray *personalTopics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
