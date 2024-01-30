@class PPNamedEntityRecord;

@interface PPNamedEntityWithRecord : PPNamedEntity {
    PPNamedEntityRecord *_mostRelevantRecord;
}

- (id)initWithName:(id)a0 category:(unsigned long long)a1 dynamicCategory:(id)a2 language:(id)a3 mostRelevantRecord:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)sentimentScore;
- (id)description;
- (id)mostRelevantRecord;
- (void).cxx_destruct;

@end
