@class NSString, CLLocation, CLHeading;
@protocol MKAnnotationPrivate;

@interface MKUserLocationInternal : NSObject {
    id<MKAnnotationPrivate> _annotation;
}

@property (retain, nonatomic) CLLocation *fixedLocation;
@property (retain, nonatomic) CLLocation *predictedLocation;
@property (retain, nonatomic) CLHeading *heading;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) id<MKAnnotationPrivate> annotation;
@property (nonatomic) double timestamp;
@property (nonatomic, getter=isUpdating) BOOL updating;
@property (nonatomic) double course;

- (void).cxx_destruct;

@end
