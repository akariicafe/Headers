@class PPTopicRecord;

@interface PPTopicWithRecord : PPTopic {
    PPTopicRecord *_mostRelevantRecord;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)sentimentScore;
- (id)mostRelevantRecord;
- (void).cxx_destruct;
- (id)initWithTopicIdentifier:(id)a0 mostRelevantRecord:(id)a1;

@end
