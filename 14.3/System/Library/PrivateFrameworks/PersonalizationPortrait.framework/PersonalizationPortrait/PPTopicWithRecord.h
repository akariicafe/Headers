@class PPTopicRecord;

@interface PPTopicWithRecord : PPTopic {
    PPTopicRecord *_mostRelevantRecord;
}

- (double)sentimentScore;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTopicIdentifier:(id)a0 mostRelevantRecord:(id)a1;
- (id)mostRelevantRecord;

@end
