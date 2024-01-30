@class JDCameraCalibrationData;

@interface JDDepthAndImageProcessor : NSObject {
    struct TimeSync { struct deque<TimeSync::TimestampedObject<JDPointCloud *>, std::allocator<TimeSync::TimestampedObject<JDPointCloud *>>> { struct __split_buffer<TimeSync::TimestampedObject<JDPointCloud *> *, std::allocator<TimeSync::TimestampedObject<JDPointCloud *> *>> { void **__first_; void **__begin_; void **__end_; struct __compressed_pair<TimeSync::TimestampedObject<JDPointCloud *> **, std::allocator<TimeSync::TimestampedObject<JDPointCloud *> *>> { void **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<TimeSync::TimestampedObject<JDPointCloud *>>> { unsigned long long __value_; } __size_; } m_pointClouds; struct deque<TimeSync::TimestampedObject<TimeSync::Image>, std::allocator<TimeSync::TimestampedObject<TimeSync::Image>>> { struct __split_buffer<TimeSync::TimestampedObject<TimeSync::Image> *, std::allocator<TimeSync::TimestampedObject<TimeSync::Image> *>> { void **__first_; void **__begin_; void **__end_; struct __compressed_pair<TimeSync::TimestampedObject<TimeSync::Image> **, std::allocator<TimeSync::TimestampedObject<TimeSync::Image> *>> { void **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<TimeSync::TimestampedObject<TimeSync::Image>>> { unsigned long long __value_; } __size_; } m_images; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } m_lock; int m_numberOfBanksToMatch; } _sync;
}

@property (retain, nonatomic) JDCameraCalibrationData *imageCalibrationData;
@property int numberOfPointCloudsPerImage;
@property BOOL pointCloudFiltering;
@property BOOL retainImagesRemovedFromQueue;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithImageCameraCalibration:(id)a0;
- (id)pushPointCloud:(id)a0;
- (id)pushImage:(id)a0;
- (id)checkSyncResults:(struct PushResults { struct __CVBuffer *x0; struct __CFDictionary *x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; int x3; id x4[4]; struct { long long x0; int x1; unsigned int x2; long long x3; } x5[4]; int x6; struct __CVBuffer *x7[2]; struct { long long x0; int x1; unsigned int x2; long long x3; } x8[2]; } *)a0;
- (id)purgeAllQueuedImages;

@end
