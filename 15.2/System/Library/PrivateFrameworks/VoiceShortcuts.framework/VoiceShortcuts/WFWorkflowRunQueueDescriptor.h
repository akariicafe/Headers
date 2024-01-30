@protocol WFPropertyListObject;

@interface WFWorkflowRunQueueDescriptor : NSObject <NSCopying> {
    unsigned long long _type;
    id<WFPropertyListObject> _queueIdentifier;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
