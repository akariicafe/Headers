@class NSString;
@protocol NSCopying;

@interface PKApplyPrimaryActionRow : NSObject <PKApplyCollectionViewRow> {
    NSString *_title;
}

@property (nonatomic) BOOL loading;
@property (copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
