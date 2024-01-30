@class NSUUID, NSProgress, NSItemProvider, NSString;

@interface _UIDataTransferRequest : NSObject <NSProgressReporting>

@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
