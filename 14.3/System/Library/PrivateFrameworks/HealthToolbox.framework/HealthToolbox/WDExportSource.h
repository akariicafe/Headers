@class NSURL, NSString;

@interface WDExportSource : NSObject <UIActivityItemSource>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *subject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
