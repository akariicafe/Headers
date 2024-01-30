@class NSString, TSDCommentStorage, NSDate, TSWPChange, TSKAnnotationAuthor;
@protocol TSKModel;

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting> {
    NSString *mChangeString;
}

@property (retain, nonatomic) TSWPChange *change;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) NSDate *date;
@property (nonatomic) id<TSKModel> model;
@property (readonly, nonatomic) NSString *changeTrackingString;
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int annotationType;
@property (readonly, nonatomic) int annotationDisplayStringType;

@end
