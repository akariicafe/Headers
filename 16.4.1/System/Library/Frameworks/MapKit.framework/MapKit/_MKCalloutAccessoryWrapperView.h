@class NSString, UIView;
@protocol _MKCalloutAccessoryView;

@interface _MKCalloutAccessoryWrapperView : UIView <_MKCalloutAccessoryView> {
    UIView<_MKCalloutAccessoryView> *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
