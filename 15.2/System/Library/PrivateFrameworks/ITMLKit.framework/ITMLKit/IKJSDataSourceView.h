@class IKJSDataSource;
@protocol IKJSDataSourceViewDelegate;

@interface IKJSDataSourceView : NSObject {
    struct { BOOL hasDidReset; } _delegateFlags;
}

@property (readonly, weak, nonatomic) IKJSDataSource *dataSource;
@property (weak, nonatomic) id<IKJSDataSourceViewDelegate> delegate;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } usedIndexRange;

- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)initForDataSource:(id)a0;

@end
