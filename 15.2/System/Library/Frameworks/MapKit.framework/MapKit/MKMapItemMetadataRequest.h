@class NSURLRequest, MKMapItem, NSURL;

@interface MKMapItemMetadataRequest : NSObject

@property (readonly, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) NSURL *url;

- (void)handleError:(id)a0;
- (void).cxx_destruct;
- (void)handleData:(id)a0;

@end
