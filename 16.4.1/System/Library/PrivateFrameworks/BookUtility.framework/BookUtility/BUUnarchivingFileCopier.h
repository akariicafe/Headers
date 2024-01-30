@class NSString, BUZipFileArchive;
@protocol BUFileCopierDelegate;

@interface BUUnarchivingFileCopier : NSObject <BUFileCopier>

@property (retain, nonatomic) BUZipFileArchive *zipArchive;
@property (weak, nonatomic) id<BUFileCopierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
