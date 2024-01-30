@class NSArray, NSObject;
@protocol OS_dispatch_data;

@interface EDPreviouslyDownloadedMessageData : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *headersOnlyData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *partialMessageData;
@property (readonly, nonatomic) BOOL hasFullMessageData;
@property (readonly, nonatomic) NSArray *mimeParts;

- (void).cxx_destruct;
- (id)initWithHeadersOnlyData:(id)a0 partialMessageData:(id)a1 hasFullMessageData:(BOOL)a2 mimeParts:(id)a3;

@end
