@class PPNamedEntityRecord;

@interface PPNamedEntityWithRecord : PPNamedEntity {
    PPNamedEntityRecord *_mostRelevantRecord;
}

- (double)sentimentScore;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 category:(unsigned long long)a1 dynamicCategory:(id)a2 language:(id)a3 mostRelevantRecord:(id)a4;
- (id)description;
- (id)mostRelevantRecord;

@end
