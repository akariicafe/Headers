@class WKBackForwardListItem, NSArray, NSString;

@interface WKBackForwardList : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardList> { struct type { unsigned char __lx[56]; } data; } _list;
}

@property (readonly, nonatomic) WKBackForwardListItem *currentItem;
@property (readonly, nonatomic) WKBackForwardListItem *backItem;
@property (readonly, nonatomic) WKBackForwardListItem *forwardItem;
@property (readonly, copy, nonatomic) NSArray *backList;
@property (readonly, copy, nonatomic) NSArray *forwardList;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
