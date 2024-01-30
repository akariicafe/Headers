@class NSArray, NSString, IKDOMNode;

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult>

@property long long type;
@property (copy, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) long long numberValue;
@property (readonly, weak, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL booleanValue;
@property (readonly, weak, nonatomic) IKDOMNode *singleNodeValue;
@property (readonly, nonatomic) BOOL invalidIteratorState;
@property (readonly, nonatomic) long long snapshotLength;

- (void).cxx_destruct;
- (id)iterateNext;
- (id)snapshotItem:(long long)a0;
- (id)initWithAppContext:(id)a0 type:(long long)a1 nodes:(id)a2;

@end
