@class NSString, UPResultLeafNode, NSNumber, UPResultStructuredDataNode;

@interface UPResultCandidateEntity : NSObject

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSString *label;
@property (readonly) NSString *text;
@property (readonly) NSNumber *groupId;
@property (readonly) NSString *semanticValue;
@property (readonly) UPResultStructuredDataNode *structuredData;
@property (readonly) UPResultLeafNode *leafNodeRepresentation;
@property (readonly) BOOL isHigherLevelEntity;
@property (readonly) NSString *higherLevelParentLabel;
@property (readonly) NSString *higherLevelChildLabel;

- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 label:(id)a1 text:(id)a2 groupId:(id)a3 semanticValue:(id)a4 structuredData:(id)a5;
- (id)annotatedEntityFragmentString;
- (id)_indexedLabelRepresentation;

@end
